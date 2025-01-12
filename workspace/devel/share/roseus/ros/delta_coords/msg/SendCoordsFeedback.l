;; Auto-generated. Do not edit!


(when (boundp 'delta_coords::SendCoordsFeedback)
  (if (not (find-package "DELTA_COORDS"))
    (make-package "DELTA_COORDS"))
  (shadow 'SendCoordsFeedback (find-package "DELTA_COORDS")))
(unless (find-package "DELTA_COORDS::SENDCOORDSFEEDBACK")
  (make-package "DELTA_COORDS::SENDCOORDSFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude SendCoordsFeedback.msg.html


(defclass delta_coords::SendCoordsFeedback
  :super ros::object
  :slots (_percent_complete ))

(defmethod delta_coords::SendCoordsFeedback
  (:init
   (&key
    ((:percent_complete __percent_complete) 0.0)
    )
   (send-super :init)
   (setq _percent_complete (float __percent_complete))
   self)
  (:percent_complete
   (&optional __percent_complete)
   (if __percent_complete (setq _percent_complete __percent_complete)) _percent_complete)
  (:serialization-length
   ()
   (+
    ;; float32 _percent_complete
    4
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;; float32 _percent_complete
       (sys::poke _percent_complete (send s :buffer) (send s :count) :float) (incf (stream-count s) 4)
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;; float32 _percent_complete
     (setq _percent_complete (sys::peek buf ptr- :float)) (incf ptr- 4)
   ;;
   self)
  )

(setf (get delta_coords::SendCoordsFeedback :md5sum-) "d342375c60a5a58d3bc32664070a1368")
(setf (get delta_coords::SendCoordsFeedback :datatype-) "delta_coords/SendCoordsFeedback")
(setf (get delta_coords::SendCoordsFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# Define a feedback message
float32 percent_complete

")



(provide :delta_coords/SendCoordsFeedback "d342375c60a5a58d3bc32664070a1368")


