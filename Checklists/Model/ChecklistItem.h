//
//  ChecklistItem.h
//  Checklists
//
//  Created by zhu yongxuan on 15/7/30.
//  Copyright (c) 2015年 zhu yongxuan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChecklistItem : NSObject

@property (nonatomic, copy)NSString *text;
@property (nonatomic, assign)BOOL checked;

- (void)toggleChecked;

@end
