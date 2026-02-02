//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface WCCanvasComponentReportRandomPickCardInfo
{
    unsigned int _pickedCardClickNum;
    unsigned int _unPickedCardClickNum;
}

@property(nonatomic) unsigned int unPickedCardClickNum; // @synthesize unPickedCardClickNum=_unPickedCardClickNum;
@property(nonatomic) unsigned int pickedCardClickNum; // @synthesize pickedCardClickNum=_pickedCardClickNum;
- (id)dictionaryRepresentation;

@end

