//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCPlayerDownloadInfo : NSObject
{
    unsigned int _moovState;
    unsigned long long _moovPos;
    unsigned long long _moovLen;
    NSString *_svrFlag;
    unsigned long long _totalLen;
    unsigned long long _currentCompletedSize;
    unsigned long long _previousCompletedSize;
    double _duration;
    double _currentPlayable;
    double _previousPlayable;
    NSDictionary *_dicVideoBoxs;
    unsigned long long _mdatLen;
    NSString *_boxsDescription;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *boxsDescription; // @synthesize boxsDescription=_boxsDescription;
@property(nonatomic) unsigned long long mdatLen; // @synthesize mdatLen=_mdatLen;
@property(retain, nonatomic) NSDictionary *dicVideoBoxs; // @synthesize dicVideoBoxs=_dicVideoBoxs;
@property(nonatomic) double previousPlayable; // @synthesize previousPlayable=_previousPlayable;
@property(nonatomic) double currentPlayable; // @synthesize currentPlayable=_currentPlayable;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned long long previousCompletedSize; // @synthesize previousCompletedSize=_previousCompletedSize;
@property(nonatomic) unsigned long long currentCompletedSize; // @synthesize currentCompletedSize=_currentCompletedSize;
@property(nonatomic) unsigned long long totalLen; // @synthesize totalLen=_totalLen;
@property(retain, nonatomic) NSString *svrFlag; // @synthesize svrFlag=_svrFlag;
@property(nonatomic) unsigned long long moovLen; // @synthesize moovLen=_moovLen;
@property(nonatomic) unsigned long long moovPos; // @synthesize moovPos=_moovPos;
@property(nonatomic) unsigned int moovState; // @synthesize moovState=_moovState;
- (unsigned long long)getExtraLengthWithTime:(double)arg1;
- (double)getPlayableWithDataLen:(unsigned long long)arg1;
- (id)init;

@end

