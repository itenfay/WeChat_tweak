//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MJTemplateMediaResource, NSString;

@interface MJTemplateMediaResourceDownLoadResult : NSObject
{
    MJTemplateMediaResource *_resource;
    NSString *_localPath;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(retain, nonatomic) MJTemplateMediaResource *resource; // @synthesize resource=_resource;

@end

