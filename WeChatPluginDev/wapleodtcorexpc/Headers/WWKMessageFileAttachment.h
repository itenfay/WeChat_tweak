//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSData, NSString;

@interface WWKMessageFileAttachment
{
    NSString *_filename;
    NSString *_path;
    NSData *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
- (id)writeToDict:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

