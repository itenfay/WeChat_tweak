//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;

@interface WCAdFinderLiveInfo : NSObject
{
    NSString *_finderUsername;
    NSString *_finderLiveId;
    NSString *_finderLiveFeedExportId;
    NSString *_finderLiveFeedNonceId;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderLiveFeedNonceId; // @synthesize finderLiveFeedNonceId=_finderLiveFeedNonceId;
@property(retain, nonatomic) NSString *finderLiveFeedExportId; // @synthesize finderLiveFeedExportId=_finderLiveFeedExportId;
@property(retain, nonatomic) NSString *finderLiveId; // @synthesize finderLiveId=_finderLiveId;
@property(retain, nonatomic) NSString *finderUsername; // @synthesize finderUsername=_finderUsername;
- (_Bool)isValid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

