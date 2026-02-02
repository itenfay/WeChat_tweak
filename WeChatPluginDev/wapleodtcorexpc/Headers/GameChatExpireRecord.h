//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface GameChatExpireRecord : NSObject
{
    NSString *_recordValue;
    NSString *_recordKey;
    double _recordTime;
    double _maxAge;
}

+ (id)modelFromJsonStr:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) double maxAge; // @synthesize maxAge=_maxAge;
@property(nonatomic) double recordTime; // @synthesize recordTime=_recordTime;
@property(retain, nonatomic) NSString *recordKey; // @synthesize recordKey=_recordKey;
@property(retain, nonatomic) NSString *recordValue; // @synthesize recordValue=_recordValue;
- (id)modelJsonStr;

@end

