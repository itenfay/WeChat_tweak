//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import <objc/NSObject.h>

@interface WXVoIPAudioPortType : NSObject
{
}

+ (int)getInUsetPlayDeviceType;
+ (_Bool)isOutputHeadset:(id)arg1;
+ (_Bool)isInputHeadset:(id)arg1;
+ (int)getInputDeviceType:(id)arg1;
+ (int)getOutputDeviceType:(id)arg1;
+ (id)getInputPortType:(id)arg1;
+ (id)getInUseOutputPortType;
+ (id)getOutputPortType:(id)arg1;
+ (id)unknownPortType;

@end

