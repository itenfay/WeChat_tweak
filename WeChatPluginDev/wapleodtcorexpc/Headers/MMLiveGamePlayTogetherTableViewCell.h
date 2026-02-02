//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@protocol MMLiveGamePlayTogetherTableViewCellDelegate;

@interface MMLiveGamePlayTogetherTableViewCell : UITableViewCell
{
    id <MMLiveGamePlayTogetherTableViewCellDelegate> _actionDelegate;
}

+ (id)identifier;
@property(nonatomic) __weak id <MMLiveGamePlayTogetherTableViewCellDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;

@end

