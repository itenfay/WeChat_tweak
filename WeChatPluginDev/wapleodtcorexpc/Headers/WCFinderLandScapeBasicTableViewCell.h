//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UITableViewCell.h>

@protocol WCFinderLandScapeBasicTableViewCellDelegate;

@interface WCFinderLandScapeBasicTableViewCell : UITableViewCell
{
    id <WCFinderLandScapeBasicTableViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WCFinderLandScapeBasicTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (int)getCommentScene;
- (void)setShowMaskView:(_Bool)arg1;
- (void)updateWithContentVM:(id)arg1;

@end

