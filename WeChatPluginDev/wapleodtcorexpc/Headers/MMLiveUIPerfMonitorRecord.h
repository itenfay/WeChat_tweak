//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMLiveUIPerfMonitorRecord : NSObject
{
    NSString *_uniqueKey;
    double _startTime;
    double _endTime;
    double _composeSizePercent;
    CDUnknownBlockType _composeRectUpdateNotifyCallback;
    NSString *_recordDesc;
    struct CGRect _composeRect;
}

+ (_Bool)isRectArea:(struct CGRect)arg1 largerThan:(struct CGRect)arg2;
+ (id)getMonitorObjKey:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *recordDesc; // @synthesize recordDesc=_recordDesc;
@property(copy, nonatomic) CDUnknownBlockType composeRectUpdateNotifyCallback; // @synthesize composeRectUpdateNotifyCallback=_composeRectUpdateNotifyCallback;
@property(nonatomic) double composeSizePercent; // @synthesize composeSizePercent=_composeSizePercent;
@property(nonatomic) struct CGRect composeRect; // @synthesize composeRect=_composeRect;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *uniqueKey; // @synthesize uniqueKey=_uniqueKey;
- (id)rootView;
- (struct CGRect)currPresentFrame;
- (id)getUniqueKey;
- (id)getRecordDesc;
- (id)description;
- (void)clear;
- (_Bool)isValid;
- (_Bool)stopMonitorIfNeed;
- (_Bool)startMonitorIfNeed;
- (void)updateComposeSizePercent:(double)arg1;
- (void)updateComposeRect:(struct CGRect)arg1;
- (void)initDefaultDatas;

@end

