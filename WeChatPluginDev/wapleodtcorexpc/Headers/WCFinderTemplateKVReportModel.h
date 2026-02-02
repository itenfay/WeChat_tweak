//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCFinderTemplateKVReportModel : NSObject
{
    _Bool _isCameraTemplate;
    NSString *_templateId;
    NSString *_musicId;
    NSString *_feedId;
    NSDictionary *_optionalUdfInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *optionalUdfInfo; // @synthesize optionalUdfInfo=_optionalUdfInfo;
@property(nonatomic) _Bool isCameraTemplate; // @synthesize isCameraTemplate=_isCameraTemplate;
@property(copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(copy, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
- (id)genUdfDict;

@end

