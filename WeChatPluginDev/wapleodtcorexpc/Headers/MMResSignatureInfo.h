//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface MMResSignatureInfo
{
    unsigned int _version;
    NSData *_signatureData;
}

+ (void)initialize;
+ (void)PBArrayAdd_signatureData;
+ (void)PBArrayAdd_version;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *signatureData; // @synthesize signatureData=_signatureData;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

