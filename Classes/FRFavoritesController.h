//
//  FRFavoritesController.h
//  radio3
//
//  Created by Daniel Rodríguez Troitiño on 31/07/09.
//  Copyright 2009 Daniel Rodríguez Troitiño. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FRFavoritesController : UITableViewController {
 @private
  NSArray *items_;
  NSInteger activeRadio_;
}

@property (nonatomic, assign) NSInteger activeRadio;

- (void)addRadio:(FRRadio *)radio;

@end