//
//  itemDetailiewController.h
//  Checklists
//
//  Created by zhu yongxuan on 15/8/3.
//  Copyright (c) 2015年 zhu yongxuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class itemDetailViewController;
@class ChecklistItem;

@protocol itemDetailViewControllerDelegate <NSObject>

- (void)itemDetailViewControllerDidCancel: (itemDetailViewController *)controller;
- (void)itemDetailViewControler: (itemDetailViewController *)controller
         didFinishAddingItem:(ChecklistItem *)item;
- (void)itemDetailViewController:(itemDetailViewController *)controller
         didFinishEditingItem:(ChecklistItem *)item;


@end

@interface itemDetailViewController : UITableViewController<UITextViewDelegate>

@property (nonatomic, strong) ChecklistItem *itemToEdit;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *doneBarButton;
@property (nonatomic, weak) id <itemDetailViewControllerDelegate> delegate;



- (IBAction)cancel;
- (IBAction)done;

@end
