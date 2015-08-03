//
//  ChecklistItem.m
//  Checklists
//
//  Created by zhu yongxuan on 15/7/30.
//  Copyright (c) 2015年 zhu yongxuan. All rights reserved.
//

#import "ChecklistItem.h"

@implementation ChecklistItem

- (void)toggleChecked
{
    self.checked = !self.checked;
}

@end
