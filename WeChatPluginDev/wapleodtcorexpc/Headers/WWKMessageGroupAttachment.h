//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSArray, NSString;

@interface WWKMessageGroupAttachment
{
    NSArray *_contents;
    NSString *_title;
    unsigned long long _forwardType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long forwardType; // @synthesize forwardType=_forwardType;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *contents; // @synthesize contents=_contents;
- (id)writeToDict:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

