//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIImageView.h>

@interface MMActivityIndicator : UIImageView
{
    double duration;
}

@property(nonatomic) double duration; // @synthesize duration;
- (void)stopAnimating;
- (void)startAnimating;

@end

