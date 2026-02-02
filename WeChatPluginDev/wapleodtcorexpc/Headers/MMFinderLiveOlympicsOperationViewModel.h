//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class TorchCert;

@interface MMFinderLiveOlympicsOperationViewModel : NSObject
{
    unsigned long long _participateButtonOperation;
    unsigned long long _certificateId;
    unsigned long long _participantCount;
    TorchCert *_torchCert;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TorchCert *torchCert; // @synthesize torchCert=_torchCert;
@property(nonatomic) unsigned long long participantCount; // @synthesize participantCount=_participantCount;
@property(nonatomic) unsigned long long certificateId; // @synthesize certificateId=_certificateId;
@property(nonatomic) unsigned long long participateButtonOperation; // @synthesize participateButtonOperation=_participateButtonOperation;
- (void)unobserveAll;
- (void)observeKeyPath:(id)arg1 callbackBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

