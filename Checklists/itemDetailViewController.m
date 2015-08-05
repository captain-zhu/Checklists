//
//  itemDetailViewController.m
//  Checklists
//
//  Created by zhu yongxuan on 15/8/3.
//  Copyright (c) 2015年 zhu yongxuan. All rights reserved.
//

#import "itemDetailViewController.h"
#import "ChecklistItem.h"

@interface itemDetailViewController ()

@end

@implementation itemDetailViewController

- (id)initWithStyle:(UITableViewStyle)style
{
    self = [super initWithStyle:style];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad {
    [super viewDidLoad];
    
    if (self.itemToEdit != nil) {
        self.title = @"Edit Item";
        self.textField.text = self.itemToEdit.text;
        self.doneBarButton.enabled = YES;
    }
    
    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
    
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    [self.textField becomeFirstResponder];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

#pragma mark - Table view data source

- (IBAction)cancel
{
    [self.delegate itemDetailViewControllerDidCancel:self];
}

- (IBAction)done
{
    if (self.itemToEdit == nil) {
        ChecklistItem *item = [[ChecklistItem alloc] init];
        item.text = self.textField.text;
        item.checked = NO;
        
        [self.delegate itemDetailViewControler:self
                           didFinishAddingItem:item];
    } else {
        self.itemToEdit.text = self.textField.text;
        
        [self.delegate itemDetailViewController:self
                           didFinishEditingItem:self.itemToEdit];
    }
    
}

- (NSIndexPath *)tableView:(UITableView *)tableView willSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    return nil;
}

- (BOOL)textField:(UITextField *)textField
        shouldChangeCharactersInRange:(NSRange)range
        replacementString:(NSString *)string
{
    NSString *newText = [textField.text stringByReplacingCharactersInRange:range
                                withString:string];
    
    self.doneBarButton.enabled = ([newText length] > 0);
    
    return YES;
}








































@end
