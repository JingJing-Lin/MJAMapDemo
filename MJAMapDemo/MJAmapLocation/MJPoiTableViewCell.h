//
//  MJPoiTableViewCell.h
//  MJAMapDemo
//
//  Created by YXCZ on 2018/1/25.
//  Copyright © 2018年 JingJing_Lin. All rights reserved.
//

#import <UIKit/UIKit.h>
#define POITableViewCellIdentifier      @"POITableViewCellIdentifier"

@interface MJPoiTableViewCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *nameLabel;
@property (nonatomic, weak) IBOutlet UILabel *infoLabel;
@property (nonatomic, weak) IBOutlet UIImageView *selectedImageView;


@end
