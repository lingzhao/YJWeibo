//
//  YJComposePhotosView.h
//  YJ-微博
//
//  Created by MACBOOK on 16/1/3.
//  Copyright © 2016年 MACBOOK. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YJComposePhotosView : UIView

-(void)addPhoto:(UIImage *)photo;

@property (nonatomic,strong,readonly) NSMutableArray  *addedPhotoArray;
@end
