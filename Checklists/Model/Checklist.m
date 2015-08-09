//
//  Checklist.m
//  Checklists
//
//  Created by zhu yongxuan on 15/8/7.
//  Copyright (c) 2015年 zhu yongxuan. All rights reserved.
//

#import "Checklist.h"
#import "CHecklistItem.h"

@implementation Checklist

- (id)init
{
    if ((self =[super init])) {
        self.items = [[NSMutableArray alloc] initWithCapacity:20];
    }
    return self;
}

- (id)initWithCoder:(NSCoder *)aDecoder
{
    if ((self = [super init])) {
        self.name = [aDecoder decodeObjectForKey:@"Name"];
        self.items = [aDecoder decodeObjectForKey:@"Items"];
    }
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{
    [aCoder encodeObject:self.name forKey:@"Name"];
    [aCoder encodeObject:self.items forKey:@"Items"];
}

- (int)countUncheckedItems
{
    int count = 0;
    for (ChecklistItem *item in self.items) {
        if (!item.checked) {
            count++;
        }
    }
    return count;
}

- (NSComparisonResult)compare:(Checklist *)otherChecklist
{
    return [self.name localizedStandardCompare: otherChecklist.name];
}

@end
