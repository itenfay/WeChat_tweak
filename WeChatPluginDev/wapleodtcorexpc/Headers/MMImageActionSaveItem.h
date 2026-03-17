//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@interface MMImageActionSaveItem : NSObject
{
    NSString *_messageUuid;
}

@property(retain, nonatomic) NSString *messageUuid; // @synthesize messageUuid=_messageUuid;
- (void)handleWithImage;
- (id)init;

@end

