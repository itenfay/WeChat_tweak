//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class WCFinderRedDotTextLayout;

@interface WCFinderRedDotRichTextView
{
    WCFinderRedDotTextLayout *_layout;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRedDotTextLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) _Bool isContentTruncatedOrInvisible;
- (double)getUntruncatedWidthMaxWidth:(double)arg1;
- (void)setContent:(id)arg1;
- (id)initWithRemainWidth:(double)arg1;

@end

