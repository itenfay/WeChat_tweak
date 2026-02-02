//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface GameChatThinGroupCellLayout
{
    double _collectionViewSpace;
    double _topLabelSpace;
    long long _secondaryLabelMaxLine;
    double _conditonLineTopSpace;
    double _addtionalConditonTopSpace;
    double _addtionalConditonBottomSpace;
    double _bulletMsgViewTopMargin;
    double _extraSpace;
}

@property(nonatomic) double extraSpace; // @synthesize extraSpace=_extraSpace;
@property(nonatomic) double bulletMsgViewTopMargin; // @synthesize bulletMsgViewTopMargin=_bulletMsgViewTopMargin;
@property(nonatomic) double addtionalConditonBottomSpace; // @synthesize addtionalConditonBottomSpace=_addtionalConditonBottomSpace;
@property(nonatomic) double addtionalConditonTopSpace; // @synthesize addtionalConditonTopSpace=_addtionalConditonTopSpace;
@property(nonatomic) double conditonLineTopSpace; // @synthesize conditonLineTopSpace=_conditonLineTopSpace;
@property(nonatomic) long long secondaryLabelMaxLine; // @synthesize secondaryLabelMaxLine=_secondaryLabelMaxLine;
@property(nonatomic) double topLabelSpace; // @synthesize topLabelSpace=_topLabelSpace;
@property(nonatomic) double collectionViewSpace; // @synthesize collectionViewSpace=_collectionViewSpace;
- (id)init;

@end

