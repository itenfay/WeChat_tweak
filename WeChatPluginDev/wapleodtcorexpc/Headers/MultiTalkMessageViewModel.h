//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSDictionary;

@interface MultiTalkMessageViewModel
{
    NSDictionary *m_contentJsonDict;
    double m_headerContentHeight;
    double m_nodeContentWidth;
    double m_nodeContentHeight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) double nodeContentHeight; // @synthesize nodeContentHeight=m_nodeContentHeight;
@property(readonly, nonatomic) double nodeContentWidth; // @synthesize nodeContentWidth=m_nodeContentWidth;
@property(readonly, nonatomic) double headerContentHeight; // @synthesize headerContentHeight=m_headerContentHeight;
@property(readonly, nonatomic) NSDictionary *contentJsonDict; // @synthesize contentJsonDict=m_contentJsonDict;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;
- (void)initMultiTalkNodeViewData;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;

@end

