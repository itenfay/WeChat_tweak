//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class MsgImageSquareThumbView, NSIndexPath, NSString;

@interface FTSMsgSearchCell
{
    _Bool _m_isHadImageThumbView;
    MsgImageSquareThumbView *m_thumbView;
    NSString *_m_detailText;
    NSIndexPath *_indexPath;
}

+ (unsigned int)calculateHeight:(unsigned int)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool m_isHadImageThumbView; // @synthesize m_isHadImageThumbView=_m_isHadImageThumbView;
@property(retain, nonatomic) NSString *m_detailText; // @synthesize m_detailText=_m_detailText;
@property(retain, nonatomic) MsgImageSquareThumbView *m_thumbView; // @synthesize m_thumbView;
- (_Bool)checkIsImageCell;
- (void)layoutSubviews;
- (id)getDetailTextWithMsgWrap:(id)arg1;
- (void)updateStatus:(_Bool)arg1;
- (void)initCellStyle;

@end

