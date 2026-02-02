//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol TSKLogProtocol;

@interface TSKLogManager : NSObject
{
    id <TSKLogProtocol> _delegate;
    unsigned long long _logLevels;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long logLevels; // @synthesize logLevels=_logLevels;
@property(retain, nonatomic) id <TSKLogProtocol> delegate; // @synthesize delegate=_delegate;
- (void)logLevel:(unsigned long long)arg1 inPosition:(struct _TSKLogPosition)arg2 withFormat:(id)arg3;
- (void)setLogDelegate:(id)arg1 withLevels:(unsigned long long)arg2;
- (id)init;

@end

