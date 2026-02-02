//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString, WCFinderRedPacketVideoEditCropRectModel;

@interface WCFinderPostSucRedPacketParams : NSObject
{
    NSString *_exportId;
    NSString *_nonceId;
    NSString *_templateId;
    NSString *_thumbUrl;
    double _startAtSeconds;
    double _durationMaxLimit;
    WCFinderRedPacketVideoEditCropRectModel *_cropRectModel;
}

+ (id)genParamsByDataItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderRedPacketVideoEditCropRectModel *cropRectModel; // @synthesize cropRectModel=_cropRectModel;
@property(nonatomic) double durationMaxLimit; // @synthesize durationMaxLimit=_durationMaxLimit;
@property(nonatomic) double startAtSeconds; // @synthesize startAtSeconds=_startAtSeconds;
@property(copy, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(copy, nonatomic) NSString *nonceId; // @synthesize nonceId=_nonceId;
@property(copy, nonatomic) NSString *exportId; // @synthesize exportId=_exportId;
- (id)init;

@end

