//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MMUILabel;

@interface MMMusicLiveSendLocationBubbleView
{
    MMUILabel *_hintLabel;
    double _triangleRightMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double triangleRightMargin; // @synthesize triangleRightMargin=_triangleRightMargin;
@property(retain, nonatomic) MMUILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
- (void)layoutSubviews;
- (id)genPath;
- (id)init;

@end

