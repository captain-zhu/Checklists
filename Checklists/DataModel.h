//
//  DataModel.h
//  Checklists
//
//  Created by zhu yongxuan on 15/8/8.
//  Copyright (c) 2015年 zhu yongxuan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataModel : NSObject

@property (nonatomic,strong)NSMutableArray *lists;

- (void)saveChecklists;
- (NSInteger)indexOfSelectedChecklist;
- (void)setIndexOfSelectedChecklist:(NSInteger)index;
- (void)sortChecklists;

+ (NSInteger)nextChecklistItemId;

@end
