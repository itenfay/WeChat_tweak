//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface MMFinderLiveStickerTextTemplateFont : NSObject
{
    NSString *_backendId;
    unsigned long long _type;
    NSString *_resourceId;
    NSString *_resourceUri;
    NSString *_resourceMd5Hash;
    NSString *_unextractedResourcePath;
    NSString *_extractedResourcePath;
}

+ (id)createRemoteDeliveredWithBackendEntity:(id)arg1;
+ (id)createLocalSourcedWithResourceId:(id)arg1 resourcePath:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *extractedResourcePath; // @synthesize extractedResourcePath=_extractedResourcePath;
@property(retain, nonatomic) NSString *unextractedResourcePath; // @synthesize unextractedResourcePath=_unextractedResourcePath;
@property(retain, nonatomic) NSString *resourceMd5Hash; // @synthesize resourceMd5Hash=_resourceMd5Hash;
@property(retain, nonatomic) NSString *resourceUri; // @synthesize resourceUri=_resourceUri;
@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *backendId; // @synthesize backendId=_backendId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

