//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class TextMessageViewModel;

@interface TextMessageSubViewModel
{
    TextMessageViewModel *_parentModel;
    double _startHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double startHeight; // @synthesize startHeight=_startHeight;
@property(nonatomic) __weak TextMessageViewModel *parentModel; // @synthesize parentModel=_parentModel;
- (struct CGRect)realFrameByCurFrame:(struct CGRect)arg1;
- (struct _NSRange)getLinkRangeWithTargetLinkStyle:(id)arg1;
- (void)setLinkHighlighted:(_Bool)arg1 url:(id)arg2 frame:(struct CGRect)arg3;
- (long long)numberOfRowsInSection;
- (id)delegate;
- (void)expandSolitaire;
- (void)resetLayoutCache;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithParentViewModel:(id)arg1;

@end

