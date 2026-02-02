//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MetadataModel, NSArray;

@interface AHAPModel : NSObject
{
    long long _Version;
    MetadataModel *_Metadata;
    NSArray *_Pattern;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *Pattern; // @synthesize Pattern=_Pattern;
@property(retain, nonatomic) MetadataModel *Metadata; // @synthesize Metadata=_Metadata;
@property(nonatomic) long long Version; // @synthesize Version=_Version;

@end

