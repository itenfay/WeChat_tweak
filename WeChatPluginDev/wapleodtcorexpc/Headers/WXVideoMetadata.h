//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface WXVideoMetadata : NSObject
{
    _Bool _isSoftEncodeMetaData;
    _Bool _isHardEncodeMetaData;
    NSMutableDictionary *_extraInfo;
    NSString *_abaInfo;
}

+ (id)generateABAMetadataValueWithAdaptiveBitrateUp:(long long)arg1 adaptiveBitrateDown:(long long)arg2 isCompressed:(_Bool)arg3 isSoftEncoder:(_Bool)arg4 isFromMaas:(_Bool)arg5;
+ (id)metadataFromAssetABA:(id)arg1;
+ (id)getExtraInfoFromAsset:(id)arg1;
+ (id)metadataFromAsset:(id)arg1;
+ (id)metadataWithWXTag;
- (void).cxx_destruct;
@property(nonatomic) _Bool isHardEncodeMetaData; // @synthesize isHardEncodeMetaData=_isHardEncodeMetaData;
@property(nonatomic) _Bool isSoftEncodeMetaData; // @synthesize isSoftEncodeMetaData=_isSoftEncodeMetaData;
@property(copy, nonatomic) NSString *abaInfo; // @synthesize abaInfo=_abaInfo;
@property(retain, nonatomic) NSMutableDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
- (id)getWXMetadata:(int)arg1 ABAFlagDown:(int)arg2;
- (_Bool)containskHardEncodeMetadata:(id)arg1;
- (_Bool)containskSoftEncodeMetadata:(id)arg1;
- (id)stringFromByte:(unsigned char)arg1;
- (void)checkSoftEncodeMetadata:(id)arg1;
- (_Bool)containsABAFlag:(id)arg1;
- (_Bool)addToWriterABA:(id)arg1 ABA:(int)arg2 ABA:(int)arg3;
- (_Bool)addToExportSession:(id)arg1;
- (_Bool)addToWriter:(id)arg1;
- (id)generateMetadataFromExtraInfo;
- (unsigned int)getCreatedWXVersion;
- (int)containsExtraInfo;
- (_Bool)getWXCompressFlag;
- (id)extraInfoForKey:(id)arg1;
- (_Bool)addExtraInfos:(id)arg1;
- (_Bool)addExtraInfo:(id)arg1 forKey:(id)arg2;

@end

