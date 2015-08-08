//
//  AllListsViewController.h
//  Checklists
//
//  Created by zhu yongxuan on 15/8/7.
//  Copyright (c) 2015年 zhu yongxuan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ListDetailViewController.h"
@class DataModel;

@interface AllListsViewController : UITableViewController
<ListDetailViewControllerDelegate>

@property (nonatomic, strong) DataModel *dataModel;

@end