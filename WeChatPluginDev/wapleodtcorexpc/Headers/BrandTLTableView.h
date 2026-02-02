//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface BrandTLTableView
{
    _Bool _reportSwitch;
    CDUnknownBlockType _identifierWithIndexPath;
    CDUnknownBlockType _indexPathWithIdentifier;
    CDUnknownBlockType _isVisibleOnScreen;
    NSString *_identifier;
    double _firstVisibleCellOriginY;
}

- (void).cxx_destruct;
@property(nonatomic) double firstVisibleCellOriginY; // @synthesize firstVisibleCellOriginY=_firstVisibleCellOriginY;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) _Bool reportSwitch; // @synthesize reportSwitch=_reportSwitch;
@property(copy, nonatomic) CDUnknownBlockType isVisibleOnScreen; // @synthesize isVisibleOnScreen=_isVisibleOnScreen;
@property(copy, nonatomic) CDUnknownBlockType indexPathWithIdentifier; // @synthesize indexPathWithIdentifier=_indexPathWithIdentifier;
@property(copy, nonatomic) CDUnknownBlockType identifierWithIndexPath; // @synthesize identifierWithIndexPath=_identifierWithIndexPath;
- (void)reportFlicker:(double)arg1 currentCellY:(double)arg2 indexPath:(id)arg3 identifier:(id)arg4;
- (void)clearMarkData;
- (_Bool)shouldMarkOrReport;
- (id)cellIdentifier:(id)arg1;
- (_Bool)isFlicker:(struct CGRect)arg1;
- (void)checkMarkedCellOriginY;
- (void)markFirstVisibleCellOriginY;
- (void)setContentSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

