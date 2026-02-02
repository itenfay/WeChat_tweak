//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, WWKMessageAttachment;

@interface WWKMessageAttachmentWrapper : NSObject
{
    NSString *_name;
    NSDate *_date;
    NSString *_avatarUrl;
    NSData *_avatarData;
    WWKMessageAttachment *_attachment;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WWKMessageAttachment *attachment; // @synthesize attachment=_attachment;
@property(copy, nonatomic) NSData *avatarData; // @synthesize avatarData=_avatarData;
@property(copy, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)writeToDict:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

