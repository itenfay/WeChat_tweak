//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol TRKReportReceiving;

@interface TRKReportManager : NSObject
{
    id <TRKReportReceiving> _receiver;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) id <TRKReportReceiving> receiver; // @synthesize receiver=_receiver;
- (void)reportEvent:(id)arg1 andParams:(id)arg2;
- (void)setReportReceiver:(id)arg1;

@end

