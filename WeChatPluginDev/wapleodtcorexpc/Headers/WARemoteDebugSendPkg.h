//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WARemoteDebugSendPkg : NSObject
{
    unsigned int _minSeq;
    unsigned int _maxSeq;
    unsigned int _timestap;
    NSString *_uuid;
    NSData *_data;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int timestap; // @synthesize timestap=_timestap;
@property(nonatomic) unsigned int maxSeq; // @synthesize maxSeq=_maxSeq;
@property(nonatomic) unsigned int minSeq; // @synthesize minSeq=_minSeq;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

@end

