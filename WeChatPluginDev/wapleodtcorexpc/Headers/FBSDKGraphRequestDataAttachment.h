//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface FBSDKGraphRequestDataAttachment : NSObject
{
    NSString *_contentType;
    NSData *_data;
    NSString *_filename;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (id)initWithData:(id)arg1 filename:(id)arg2 contentType:(id)arg3;

@end

