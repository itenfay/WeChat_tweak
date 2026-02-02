//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WXVideoFileObject : NSObject
{
    NSData *videoFileData;
    NSString *_localIdentifier;
}

+ (id)object;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(retain, nonatomic) NSData *videoFileData; // @synthesize videoFileData;
- (id)init;

@end

