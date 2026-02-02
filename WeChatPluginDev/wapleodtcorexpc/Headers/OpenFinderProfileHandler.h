//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@interface OpenFinderProfileHandler : NSObject
{
}

- (void)onAuthDidCancel;
- (void)onAuthDidFail;
- (void)onAuthDidSuccess;
- (void)createOpenUrl;

@end

