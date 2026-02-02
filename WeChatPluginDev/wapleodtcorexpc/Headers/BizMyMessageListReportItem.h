//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MMBaseSessionCellData;

@interface BizMyMessageListReportItem : NSObject
{
    _Bool _isStar;
    int _actionType;
    MMBaseSessionCellData *_cellData;
    unsigned long long _timeStamp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isStar; // @synthesize isStar=_isStar;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
@property(nonatomic) unsigned long long timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) MMBaseSessionCellData *cellData; // @synthesize cellData=_cellData;

@end

