//
//  ChecklistViewController.h
//  Checklists
//
//  Created by zhu yongxuan on 15/7/30.
//  Copyright (c) 2015年 zhu yongxuan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "itemDetailViewController.h"

@class Checklist;

@interface ChecklistViewController : UITableViewController
                             <itemDetailViewControllerDelegate>

@property (nonatomic, strong) Checklist *checklist;

@end
