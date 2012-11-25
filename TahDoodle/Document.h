//
//  Document.h
//  TahDoodle
//
//  Created by Fisher on 11/25/12.
//  Copyright (c) 2012 Fisher Adelakin. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface Document : NSDocument <NSTableViewDataSource>
{
    NSMutableArray *todoItems;
    IBOutlet NSTableView *itemTableView;
}
- (IBAction)createNewItem:(id)sender;

@end
