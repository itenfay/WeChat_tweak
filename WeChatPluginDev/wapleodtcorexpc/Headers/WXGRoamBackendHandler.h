//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@protocol WXGRoamBackendHandlerDelegate;

@interface WXGRoamBackendHandler : NSObject
{
    _Bool _onAutoTestMode;
    id <WXGRoamBackendHandlerDelegate> _delegate;
}

+ (id)channelRespToString:(id)arg1;
+ (id)encodeDataBae64:(id)arg1;
+ (id)decodeBase64String:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool onAutoTestMode; // @synthesize onAutoTestMode=_onAutoTestMode;
@property(nonatomic) __weak id <WXGRoamBackendHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)mockAutoTestPackage;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)dealloc;
- (void)getDeviceNetworkInfo:(unsigned long long)arg1;
- (void)getRoamBackupPackage:(id)arg1 invokeID:(unsigned long long)arg2;
- (void)setRoamBackupPackage:(id)arg1 invokeID:(unsigned long long)arg2;
- (void)buildSecureChannel:(id)arg1 invokeID:(unsigned long long)arg2;
- (void)buildRelationSession:(id)arg1 invokeID:(unsigned long long)arg2;
- (void)genEncrytKey:(unsigned long long)arg1;
- (void)getEncrytKey:(id)arg1 invokeID:(unsigned long long)arg2;

@end

