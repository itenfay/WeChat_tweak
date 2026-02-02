//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface KvReportItem29480
{
    unsigned int _actionType;
    unsigned int _isRed;
    unsigned int _redDotQuantity;
    unsigned int _tlSessionId;
    unsigned int _homeSessionId;
}

@property(nonatomic) unsigned int homeSessionId; // @synthesize homeSessionId=_homeSessionId;
@property(nonatomic) unsigned int tlSessionId; // @synthesize tlSessionId=_tlSessionId;
@property(nonatomic) unsigned int redDotQuantity; // @synthesize redDotQuantity=_redDotQuantity;
@property(nonatomic) unsigned int isRed; // @synthesize isRed=_isRed;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
- (id)reportOrderedFieldNameArr;
- (unsigned int)reportKvId;

@end

