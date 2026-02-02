//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface WCPOICommentStarView : UIView
{
    UIImageView *m_imageView;
    _Bool _highlighted;
    unsigned int _uIndex;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int uIndex; // @synthesize uIndex=_uIndex;
@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (id)initWithHeight:(double)arg1;

@end

