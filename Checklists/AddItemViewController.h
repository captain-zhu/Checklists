//
//  AddItemViewController.h
//  Checklists
//
//  Created by zhu yongxuan on 15/8/3.
//  Copyright (c) 2015年 zhu yongxuan. All rights reserved.
//

#import <UIKit/UIKit.h>

@class AddItemViewController;
@class ChecklistItem;

@protocol AddItemViewControllerDelegate <NSObject>

- (void)addItemViewControllerDidCancel: (AddItemViewController *)controller;
- (void)addItemViewControler: (AddItemViewController *)controller
         didFinishAddingItem:(ChecklistItem *)item;


@end

@interface AddItemViewController : UITableViewController<UITextViewDelegate>

@property (nonatomic, strong) ChecklistItem *itemToEdit;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *doneBarButton;
@property (nonatomic, weak) id <AddItemViewControllerDelegate> delegate;


- (IBAction)cancel;
- (IBAction)done;

@end
