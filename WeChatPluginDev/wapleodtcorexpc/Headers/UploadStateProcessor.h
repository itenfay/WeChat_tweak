//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@class MultiMediaUploadProcessController, NSString;

@interface UploadStateProcessor : NSObject
{
    NSString *_identifier;
    MultiMediaUploadProcessController *_context;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MultiMediaUploadProcessController *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)onProcessEndWithFailType:(int)arg1;
- (void)transformToFinalState;
- (id)getStateName;
- (void)stop;
- (void)start;
- (id)initWithContext:(id)arg1;

@end

