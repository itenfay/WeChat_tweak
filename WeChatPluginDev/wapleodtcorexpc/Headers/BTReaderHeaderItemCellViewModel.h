//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class BTReaderMsgSectionData, NSMutableArray, NSString, UIFont;

@interface BTReaderHeaderItemCellViewModel
{
    NSMutableArray *_contactLabelStyles;
    UIFont *_contactLabelFont;
    double _contactLabelMaxWidth;
    struct CGSize _contactLabelSize;
}

- (void).cxx_destruct;
@property(nonatomic) double contactLabelMaxWidth; // @synthesize contactLabelMaxWidth=_contactLabelMaxWidth;
@property(retain, nonatomic) UIFont *contactLabelFont; // @synthesize contactLabelFont=_contactLabelFont;
@property(nonatomic) struct CGSize contactLabelSize; // @synthesize contactLabelSize=_contactLabelSize;
@property(retain, nonatomic) NSMutableArray *contactLabelStyles; // @synthesize contactLabelStyles=_contactLabelStyles;
@property(readonly, nonatomic) BTReaderMsgSectionData *readerMsgSectionData;
- (_Bool)isMsgTopRightUseRecReason;
@property(readonly, nonatomic) _Bool isBrandLiving;
@property(readonly, nonatomic) NSString *rightTopWording;
@property(readonly, nonatomic) UIFont *timeLabelFont;
@property(readonly, nonatomic) double headerWidth;
- (void)clearCache;
- (double)viewHeight;
- (id)itemViewClassName;
- (void)updateWithMsgWrap:(id)arg1 contact:(id)arg2 viewWidth:(double)arg3;

@end

