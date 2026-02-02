//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class NSString;
@protocol WCFinderBindableObjectProtocol;

@interface WCFinderObjectBindRange : NSObject
{
    id <WCFinderBindableObjectProtocol> _object;
    unsigned long long _type;
    NSString *_content;
    struct _NSRange _range;
}

+ (id)xmlStyleTagForType:(unsigned long long)arg1;
+ (id)xmlStyleTagFormatForType:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id <WCFinderBindableObjectProtocol> object; // @synthesize object=_object;

@end

