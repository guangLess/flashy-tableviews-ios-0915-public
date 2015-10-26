//
//  CustomCell.h
//  FISFlashyTableViews
//
//  Created by Guang on 10/25/15.
//  Copyright © 2015 Guang. All rights reserved.
//

#import <SWTableViewCell/SWTableViewCell.h>

@interface CustomCell : SWTableViewCell


@property (weak, nonatomic) IBOutlet UILabel *customLable;

@property (weak, nonatomic) IBOutlet UIImageView *image;


@end
