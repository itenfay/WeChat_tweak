//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class HeMetadataModel, NSArray;

@interface HeModel : NSObject
{
    HeMetadataModel *_Metadata;
    NSArray *_Pattern;
}

+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *Pattern; // @synthesize Pattern=_Pattern;
@property(retain, nonatomic) HeMetadataModel *Metadata; // @synthesize Metadata=_Metadata;

@end

